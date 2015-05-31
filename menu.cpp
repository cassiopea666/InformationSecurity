#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent) : QMainWindow(parent), ui(new Ui::Menu)
{
    setlocale(LC_ALL, "Ukrainian");
    qDebug() << "Current locale set to --> "<<setlocale(LC_ALL,NULL);
    ui->setupUi(this);
    ui->statusBar->showMessage("ТЕМА: Основні криптографічні методи захисту інформації.");
}

Menu::~Menu()
{
  delete ui;
}

void Menu::PrintInputFile(QString filepath)
{
  if (!filepath.isEmpty()) {
      QFile infile(filepath); QFileInfo fp(filepath);
      ui->InputFile->clear(); ui->InputFile->setText("Вміст вхідного файлу(" + fp.fileName() + "):" + "\n......................................................\n");
      if (infile.open(QIODevice::ReadOnly | QIODevice::Text)){
          QTextStream stream(&infile);
          while (!stream.atEnd()){
              ui->InputFile->setText(ui->InputFile->toPlainText()+stream.readLine()+"\n");
          }
      }
      else QMessageBox::information(this, tr("Помилка!"), tr("Неможливо завантажити файл %1.").arg(filepath));
      infile.close();
  }
}

void Menu::on_tabWidget_tabBarClicked(int index)
{
  if (index == 0) ui->statusBar->showMessage("ТЕМА: Основні криптографічні методи захисту інформації.");
  if (index == 1) ui->statusBar->showMessage("ТЕМА: Метод розподілу ключів Діффі-Хеллмана");
  if (index == 2) ui->statusBar->showMessage("ТЕМА: Симетричні алгоритми шифрування");
  if (index == 3) ui->statusBar->showMessage("ТЕМА: Hash-функції");
  if (index == 4) ui->statusBar->showMessage("ТЕМА: Електронний цифровий підпис RSA");
}

void Menu::on_SelectInFPath_clicked()
{
  QString fileName = QFileDialog::getOpenFileName(this, tr("Вибір файлу для відкриття..."), QString(),
              tr("Text Files (*.docx *.doc *.txt);;All files (*.*)"));
  ui->PlaintextPath->setText(fileName);
  PrintInputFile(fileName);
}

void Menu::on_SelectEncFPath_clicked()
{
  QString fileName = QFileDialog::getOpenFileName(this, tr("Вибір файлу для відкриття..."), QString(),
              tr("Decrypted Files (*.rc4 *.ftl *.hash *.rsa);;All files (*.*)"));
  ui->CiphertextPath->setText(fileName);
  PrintInputFile(fileName);
}

void Menu::on_ReadFromFile_stateChanged(int arg1)
{
  if (arg1)
    ui->lineEditPlaintext->setDisabled(1);
  else
    ui->lineEditPlaintext->setEnabled(1);
}

void Menu::on_VigenereEncryptButton_clicked() {
  QByteArray Plaintext = QByteArray(ui->lineEditPlaintext->text().toUtf8());
  QByteArray Key = QByteArray(ui->lineEditKey->text().toUtf8());
  qDebug() << Plaintext.data() << Key.data(); //memcpy(Plaintext, ui->lineEditPlaintext->text().toStdString().c_str(), ui->lineEditPlaintext->text().size());
  uchar res;
  int i = 0, k = 0; res = VigenereEncryptSymbol((uchar)Plaintext[i], (uchar)Key[k]); k++;
  while (i < ui->lineEditPlaintext->text().length()) {
    if (k < (ui->lineEditKey->text().length() - 1)) {
      k++; res = VigenereEncryptSymbol((uchar)Plaintext[i], (uchar)Key[k]);
    }
    else {
      k = 0; res = VigenereEncryptSymbol((uchar)Plaintext[i], (uchar)Key[k]); k++;
    }
    qDebug() << "i = " <<i<<"\t"<<(uchar) Plaintext[i] << "\t" << QByteArray::number((uchar) Plaintext[i], 16).toUpper() << "\t"<< Key[k] <<"\t"<< (uchar) Key[k] <<"\t"<< res <<"\t"<< (char) res;
    i++;
  }
  ui->OutputFile->append(QString(Plaintext.data()));
}




























