#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent) : QMainWindow(parent), ui(new Ui::Menu)
{
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
  unsigned char* Plaintext = (unsigned char*)ui->lineEditPlaintext->text().toStdString().c_str();
  unsigned char* Key = (unsigned char*)ui->lineEditKey->text().toStdString().c_str();
  int i = 0, k =0;
  qDebug() << ui->lineEditPlaintext->text() << "\t" << Plaintext[i] <<"\t" <<(char) Plaintext[i];
  while (i < ui->lineEditPlaintext->text().length()) {
    if (k < ui->lineEditKey->text().length()) {
      qDebug() << Plaintext[i] <<"\t"<<(char) Plaintext[i]<<"\t"<< Key[k] <<"\t"<< (char) Key[k] <<"\t"<< VigenereEncryptSymbol(Plaintext[i], Key, k) <<"\t"<< (char) VigenereEncryptSymbol(Plaintext[i], Key, k);
      k++;
    }
    else {
      k = 0;
      qDebug() << Plaintext[i] <<"\t"<<(char) Plaintext[i]<<"\t"<< Key[k] <<"\t"<< (char) Key[k] <<"\t"<< VigenereEncryptSymbol(Plaintext[i], Key, k) <<"\t"<< (char) VigenereEncryptSymbol(Plaintext[i], Key, k);
      k++;
    }
    i++;
  }
  //qDebug() << "hello world"<<"\n"<<(char) VigenereEncryptSymbol(65, (unsigned char*)ui->lineEditKey->text().toStdString().c_str(), 3) << endl;
}




























