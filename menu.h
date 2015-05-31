#ifndef MENU_H
#define MENU_H

#include <QMainWindow>
#include <QtCore>
#include <QMessageBox>
#include <QFileDialog>
#include <cipher.h>

namespace Ui {
class Menu;
}

class Menu : public QMainWindow
{
    Q_OBJECT

public:
  explicit Menu(QWidget *parent = 0);
  ~Menu();
  void PrintInputFile(QString filepath);

private slots:
  void on_tabWidget_tabBarClicked(int index);
  void on_SelectInFPath_clicked();
  void on_SelectEncFPath_clicked();
  void on_ReadFromFile_stateChanged(int arg1);

  void on_VigenereEncryptButton_clicked();

private:
  Ui::Menu *ui;
};

#endif // MENU_H
