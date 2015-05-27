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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab_ciphers;
    QWidget *tab_diffiehellman;
    QWidget *tab_symmetric;
    QWidget *tab_hash;
    QWidget *tab_rsa;
    QFrame *frame;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit;
    QToolButton *toolButton_2;
    QLineEdit *lineEdit_2;
    QToolButton *toolButton;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QStringLiteral("Menu"));
        Menu->resize(898, 625);
        centralWidget = new QWidget(Menu);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab_ciphers = new QWidget();
        tab_ciphers->setObjectName(QStringLiteral("tab_ciphers"));
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

        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(0, 200));
        frame->setAutoFillBackground(false);
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(3);
        widget = new QWidget(frame);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 30, 861, 27));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(false);
        lineEdit->setMinimumSize(QSize(0, 25));
        QPalette palette;
        QBrush brush(QColor(77, 77, 77, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        lineEdit->setPalette(palette);

        gridLayout_2->addWidget(lineEdit, 0, 0, 1, 1);

        toolButton_2 = new QToolButton(widget);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setMinimumSize(QSize(25, 25));
        QIcon icon;
        icon.addFile(QStringLiteral(":/ico/folder_add_24.ico"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon);
        toolButton_2->setIconSize(QSize(20, 20));
        toolButton_2->setPopupMode(QToolButton::DelayedPopup);
        toolButton_2->setToolButtonStyle(Qt::ToolButtonIconOnly);
        toolButton_2->setAutoRaise(false);

        gridLayout_2->addWidget(toolButton_2, 0, 1, 1, 1);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setEnabled(false);
        lineEdit_2->setMinimumSize(QSize(0, 25));

        gridLayout_2->addWidget(lineEdit_2, 0, 2, 1, 1);

        toolButton = new QToolButton(widget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setMinimumSize(QSize(25, 25));
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(20, 20));

        gridLayout_2->addWidget(toolButton, 0, 3, 1, 1);

        widget1 = new QWidget(frame);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 10, 861, 21));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));
        label->setFrameShape(QFrame::NoFrame);
        label->setWordWrap(false);
        label->setMargin(1);

        horizontalLayout->addWidget(label);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFrameShape(QFrame::NoFrame);
        label_3->setWordWrap(false);
        label_3->setMargin(1);

        horizontalLayout->addWidget(label_3);

        tabWidget->raise();
        lineEdit_2->raise();
        lineEdit->raise();
        toolButton_2->raise();
        toolButton->raise();
        label->raise();
        label_3->raise();

        gridLayout->addWidget(frame, 0, 0, 1, 1);

        Menu->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Menu);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 898, 21));
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
        Menu->setWindowTitle(QApplication::translate("Menu", "Menu", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_ciphers), QApplication::translate("Menu", "\342\204\226  1", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_diffiehellman), QApplication::translate("Menu", "\342\204\226  2", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_symmetric), QApplication::translate("Menu", "\342\204\226  3", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_hash), QApplication::translate("Menu", "\342\204\226  4", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_rsa), QApplication::translate("Menu", "\342\204\226  5", 0));
        toolButton_2->setText(QApplication::translate("Menu", "...", 0));
        toolButton->setText(QApplication::translate("Menu", "...", 0));
        label->setText(QApplication::translate("Menu", "\320\250\320\273\321\217\321\205 \320\264\320\276 \321\204\320\260\320\271\320\273\321\203 \320\267 \320\262\321\226\320\264\320\272\321\200\320\270\321\202\320\270\320\274 \321\202\320\265\320\272\321\201\321\202\320\276\320\274 (\320\264\320\273\321\217 \321\210\320\270\321\204\321\200\321\203\320\262\320\260\320\275\320\275\321\217):", 0));
        label_3->setText(QApplication::translate("Menu", "\320\250\320\273\321\217\321\205 \320\264\320\276 \321\204\320\260\320\271\320\273\321\203 \320\267 \321\210\320\270\321\204\321\200\320\276\321\202\320\265\320\272\321\201\321\202\320\276\320\274 (\320\264\320\273\321\217 \320\264\320\265\321\210\320\270\321\204\321\200\321\203\320\262\320\260\320\275\320\275\321\217):", 0));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
