/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QFrame *frame;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QLineEdit *PlaintextPath;
    QToolButton *SelectInFPath;
    QLineEdit *CiphertextPath;
    QToolButton *SelectEncFPath;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_3;
    QTabWidget *tabWidget;
    QWidget *tab_ciphers;
    QLineEdit *lineEditPlaintext;
    QCheckBox *ReadFromFile;
    QLineEdit *lineEditKey;
    QLabel *label_plaintext1;
    QLabel *label_key1;
    QGroupBox *groupBox;
    QPushButton *VigenereEncryptButton;
    QPushButton *VigenereDecryptButton;
    QWidget *tab_diffiehellman;
    QWidget *tab_symmetric;
    QWidget *tab_hash;
    QWidget *tab_rsa;
    QVBoxLayout *verticalLayout;
    QTextEdit *InputFile;
    QTextEdit *OutputFile;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QStringLiteral("Menu"));
        Menu->resize(900, 750);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(26, 95, 109, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        Menu->setPalette(palette);
        QIcon icon;
        icon.addFile(QStringLiteral(":/ico/Login.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Menu->setWindowIcon(icon);
        centralWidget = new QWidget(Menu);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(0, 200));
        QPalette palette1;
        QBrush brush3(QColor(0, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush4(QColor(214, 225, 227, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        frame->setPalette(palette1);
        frame->setAutoFillBackground(true);
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(2);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 861, 27));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        PlaintextPath = new QLineEdit(layoutWidget);
        PlaintextPath->setObjectName(QStringLiteral("PlaintextPath"));
        PlaintextPath->setEnabled(false);
        PlaintextPath->setMinimumSize(QSize(0, 25));
        QPalette palette2;
        QBrush brush5(QColor(77, 77, 77, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush5);
        PlaintextPath->setPalette(palette2);

        gridLayout_2->addWidget(PlaintextPath, 0, 0, 1, 1);

        SelectInFPath = new QToolButton(layoutWidget);
        SelectInFPath->setObjectName(QStringLiteral("SelectInFPath"));
        SelectInFPath->setMinimumSize(QSize(25, 25));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/ico/folder_add_24.ico"), QSize(), QIcon::Normal, QIcon::Off);
        SelectInFPath->setIcon(icon1);
        SelectInFPath->setIconSize(QSize(20, 20));
        SelectInFPath->setPopupMode(QToolButton::DelayedPopup);
        SelectInFPath->setToolButtonStyle(Qt::ToolButtonIconOnly);
        SelectInFPath->setAutoRaise(false);

        gridLayout_2->addWidget(SelectInFPath, 0, 1, 1, 1);

        CiphertextPath = new QLineEdit(layoutWidget);
        CiphertextPath->setObjectName(QStringLiteral("CiphertextPath"));
        CiphertextPath->setEnabled(false);
        CiphertextPath->setMinimumSize(QSize(0, 25));

        gridLayout_2->addWidget(CiphertextPath, 0, 2, 1, 1);

        SelectEncFPath = new QToolButton(layoutWidget);
        SelectEncFPath->setObjectName(QStringLiteral("SelectEncFPath"));
        SelectEncFPath->setMinimumSize(QSize(25, 25));
        SelectEncFPath->setIcon(icon1);
        SelectEncFPath->setIconSize(QSize(20, 20));
        SelectEncFPath->setToolButtonStyle(Qt::ToolButtonIconOnly);

        gridLayout_2->addWidget(SelectEncFPath, 0, 3, 1, 1);

        layoutWidget1 = new QWidget(frame);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 861, 21));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));
        label->setFrameShape(QFrame::NoFrame);
        label->setWordWrap(false);
        label->setMargin(1);

        horizontalLayout->addWidget(label);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFrameShape(QFrame::NoFrame);
        label_3->setWordWrap(false);
        label_3->setMargin(1);

        horizontalLayout->addWidget(label_3);


        gridLayout->addWidget(frame, 0, 0, 1, 3);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush);
        tabWidget->setPalette(palette3);
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        tab_ciphers = new QWidget();
        tab_ciphers->setObjectName(QStringLiteral("tab_ciphers"));
        lineEditPlaintext = new QLineEdit(tab_ciphers);
        lineEditPlaintext->setObjectName(QStringLiteral("lineEditPlaintext"));
        lineEditPlaintext->setGeometry(QRect(20, 30, 231, 20));
        ReadFromFile = new QCheckBox(tab_ciphers);
        ReadFromFile->setObjectName(QStringLiteral("ReadFromFile"));
        ReadFromFile->setGeometry(QRect(19, 60, 231, 20));
        lineEditKey = new QLineEdit(tab_ciphers);
        lineEditKey->setObjectName(QStringLiteral("lineEditKey"));
        lineEditKey->setGeometry(QRect(20, 110, 231, 20));
        label_plaintext1 = new QLabel(tab_ciphers);
        label_plaintext1->setObjectName(QStringLiteral("label_plaintext1"));
        label_plaintext1->setGeometry(QRect(20, 6, 231, 21));
        label_key1 = new QLabel(tab_ciphers);
        label_key1->setObjectName(QStringLiteral("label_key1"));
        label_key1->setGeometry(QRect(20, 86, 231, 21));
        groupBox = new QGroupBox(tab_ciphers);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(19, 149, 231, 61));
        VigenereEncryptButton = new QPushButton(groupBox);
        VigenereEncryptButton->setObjectName(QStringLiteral("VigenereEncryptButton"));
        VigenereEncryptButton->setGeometry(QRect(10, 20, 101, 23));
        VigenereDecryptButton = new QPushButton(groupBox);
        VigenereDecryptButton->setObjectName(QStringLiteral("VigenereDecryptButton"));
        VigenereDecryptButton->setGeometry(QRect(124, 20, 101, 23));
        tabWidget->addTab(tab_ciphers, QString());
        tab_diffiehellman = new QWidget();
        tab_diffiehellman->setObjectName(QStringLiteral("tab_diffiehellman"));
        tabWidget->addTab(tab_diffiehellman, QString());
        tab_symmetric = new QWidget();
        tab_symmetric->setObjectName(QStringLiteral("tab_symmetric"));
        tabWidget->addTab(tab_symmetric, QString());
        tab_hash = new QWidget();
        tab_hash->setObjectName(QStringLiteral("tab_hash"));
        tabWidget->addTab(tab_hash, QString());
        tab_rsa = new QWidget();
        tab_rsa->setObjectName(QStringLiteral("tab_rsa"));
        tabWidget->addTab(tab_rsa, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        InputFile = new QTextEdit(centralWidget);
        InputFile->setObjectName(QStringLiteral("InputFile"));
        InputFile->setReadOnly(true);

        verticalLayout->addWidget(InputFile);

        OutputFile = new QTextEdit(centralWidget);
        OutputFile->setObjectName(QStringLiteral("OutputFile"));
        OutputFile->setReadOnly(true);

        verticalLayout->addWidget(OutputFile);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setEnabled(false);
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Base, brush);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        plainTextEdit->setPalette(palette4);
        plainTextEdit->setFrameShape(QFrame::Panel);
        plainTextEdit->setFrameShadow(QFrame::Raised);
        plainTextEdit->setLineWidth(2);
        plainTextEdit->setReadOnly(true);
        plainTextEdit->setBackgroundVisible(false);

        gridLayout->addWidget(plainTextEdit, 1, 2, 1, 1);

        Menu->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Menu);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 900, 21));
        Menu->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Menu);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Menu->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Menu);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Menu->setStatusBar(statusBar);

        retranslateUi(Menu);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QMainWindow *Menu)
    {
        Menu->setWindowTitle(QApplication::translate("Menu", "\320\227\320\260\321\205\320\270\321\201\321\202 \321\226\320\275\321\204\320\276\321\200\320\274\320\260\321\206\321\226\321\227 \320\262 \320\272\320\276\320\274\320\277'\321\216\321\202\320\265\321\200\320\275\320\270\321\205 \321\201\320\270\321\201\321\202\320\265\320\274\320\260\321\205", 0));
        PlaintextPath->setText(QApplication::translate("Menu", "C:/Qt/IS/InformationSecurity2-3/build-InformationSecurity2-3-Desktop_Qt_5_4_1_MSVC2013_OpenGL_64bit-Debug/plaintext.txt", 0));
        SelectInFPath->setText(QApplication::translate("Menu", "...", 0));
        CiphertextPath->setText(QApplication::translate("Menu", "C:/Qt/IS/InformationSecurity2-3/build-InformationSecurity2-3-Desktop_Qt_5_4_1_MSVC2013_OpenGL_64bit-Debug/plaintext.txt.rc4", 0));
        SelectEncFPath->setText(QApplication::translate("Menu", "...", 0));
        label->setText(QApplication::translate("Menu", "\320\250\320\273\321\217\321\205 \320\264\320\276 \321\204\320\260\320\271\320\273\321\203 \320\267 \320\262\321\226\320\264\320\272\321\200\320\270\321\202\320\270\320\274 \321\202\320\265\320\272\321\201\321\202\320\276\320\274 (\320\264\320\273\321\217 \321\210\320\270\321\204\321\200\321\203\320\262\320\260\320\275\320\275\321\217):", 0));
        label_3->setText(QApplication::translate("Menu", "\320\250\320\273\321\217\321\205 \320\264\320\276 \321\204\320\260\320\271\320\273\321\203 \320\267 \321\210\320\270\321\204\321\200\320\276\321\202\320\265\320\272\321\201\321\202\320\276\320\274 (\320\264\320\273\321\217 \320\264\320\265\321\210\320\270\321\204\321\200\321\203\320\262\320\260\320\275\320\275\321\217):", 0));
        lineEditPlaintext->setText(QApplication::translate("Menu", "\"Neque porro quisquam est qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit...\" \"\320\235\320\265\320\274\320\260\321\224 \320\275\321\226\320\272\320\276\320\263\320\276, \321\205\321\202\320\276 \320\273\321\216\320\261\320\270\320\262 \320\261\320\270 \321\201\320\260\320\274\320\270\320\271 \320\261\321\226\320\273\321\214, \321\205\321\202\320\276 \320\261 \321\210\321\203\320\272\320\260\320\262 \320\271\320\276\320\263\320\276 \321\207\320\270 \321\205\320\276\321\202\321\226\320\262 \320\261\320\270 \320\271\320\276\320\263\320\276 \320\267\320\260\320\267\320\275\320\260\320\262\320\260\321\202\320\270 \321\202\321\226\320\273\321\214\320\272\320\270 \321\207\320\265\321\200\320\265\320\267 \321\202\320\265, \321\211\320\276 \320\262\321\226\320\275 - \320\261\321\226\320\273\321\214...\"", 0));
        ReadFromFile->setText(QApplication::translate("Menu", "\320\227\321\207\320\270\321\202\320\260\321\202\320\270 plaintext \320\267 \321\204\320\260\320\271\320\273\321\203", 0));
        lineEditKey->setText(QApplication::translate("Menu", "ESPIONAGE", 0));
        label_plaintext1->setText(QApplication::translate("Menu", "\320\222\320\262\320\265\321\201\321\202\320\270 \321\204\321\200\320\260\320\267\321\203 \320\264\320\273\321\217 \321\210\320\270\321\204\321\200\321\203\320\262\320\260\320\275\320\275\321\217:", 0));
        label_key1->setText(QApplication::translate("Menu", "\320\227\320\260\320\264\320\260\321\202\320\270 \320\272\320\273\321\216\321\207\320\276\320\262\321\203 \321\204\321\200\320\260\320\267\321\203:", 0));
        groupBox->setTitle(QApplication::translate("Menu", "Vigen\303\250re square", 0));
        VigenereEncryptButton->setText(QApplication::translate("Menu", "Encrypt", 0));
        VigenereDecryptButton->setText(QApplication::translate("Menu", "Decrypt", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_ciphers), QApplication::translate("Menu", "\342\204\226  1", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_diffiehellman), QApplication::translate("Menu", "\342\204\226  2", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_symmetric), QApplication::translate("Menu", "\342\204\226  3", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_hash), QApplication::translate("Menu", "\342\204\226  4", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_rsa), QApplication::translate("Menu", "\342\204\226  5", 0));
        plainTextEdit->setPlaceholderText(QApplication::translate("Menu", "~~~~~~~~~\320\206\321\201\321\202\320\276\321\200\321\226\321\217 \321\210\320\270\321\204\321\200\321\203\320\262\320\260\320\275\320\275\321\217~~~~~~~~~", 0));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
