#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Menu)
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
