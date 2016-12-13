/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *search_box;
    QPushButton *pushButton_add_new_scientist;
    QTableWidget *scientist_table;
    QPushButton *button_add_scientist;
    QComboBox *dropdown_what_to_look_at;
    QPushButton *button_scientist_info;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(768, 652);
        MainWindow->setFocusPolicy(Qt::StrongFocus);
        MainWindow->setContextMenuPolicy(Qt::NoContextMenu);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        search_box = new QLineEdit(centralWidget);
        search_box->setObjectName(QStringLiteral("search_box"));
        search_box->setGeometry(QRect(490, 10, 261, 31));
        search_box->setMouseTracking(true);
        search_box->setLayoutDirection(Qt::LeftToRight);
        search_box->setAutoFillBackground(true);
        search_box->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        search_box->setCursorMoveStyle(Qt::LogicalMoveStyle);
        search_box->setClearButtonEnabled(true);
        pushButton_add_new_scientist = new QPushButton(centralWidget);
        pushButton_add_new_scientist->setObjectName(QStringLiteral("pushButton_add_new_scientist"));
        pushButton_add_new_scientist->setGeometry(QRect(20, 350, 91, 31));
        scientist_table = new QTableWidget(centralWidget);
        if (scientist_table->columnCount() < 5)
            scientist_table->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        scientist_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        scientist_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        scientist_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        scientist_table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        scientist_table->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        scientist_table->setObjectName(QStringLiteral("scientist_table"));
        scientist_table->setGeometry(QRect(20, 50, 731, 381));
        scientist_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        scientist_table->setSelectionBehavior(QAbstractItemView::SelectRows);
        scientist_table->setShowGrid(false);
        scientist_table->setSortingEnabled(true);
        scientist_table->horizontalHeader()->setCascadingSectionResizes(false);
        scientist_table->horizontalHeader()->setHighlightSections(true);
        scientist_table->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        scientist_table->horizontalHeader()->setStretchLastSection(true);
        scientist_table->verticalHeader()->setVisible(false);
        scientist_table->verticalHeader()->setDefaultSectionSize(42);
        scientist_table->verticalHeader()->setStretchLastSection(false);
        button_add_scientist = new QPushButton(centralWidget);
        button_add_scientist->setObjectName(QStringLiteral("button_add_scientist"));
        button_add_scientist->setGeometry(QRect(20, 440, 151, 31));
        dropdown_what_to_look_at = new QComboBox(centralWidget);
        dropdown_what_to_look_at->setObjectName(QStringLiteral("dropdown_what_to_look_at"));
        dropdown_what_to_look_at->setGeometry(QRect(20, 13, 191, 31));
        button_scientist_info = new QPushButton(centralWidget);
        button_scientist_info->setObjectName(QStringLiteral("button_scientist_info"));
        button_scientist_info->setGeometry(QRect(20, 480, 151, 31));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        search_box->setPlaceholderText(QApplication::translate("MainWindow", "Search....", 0));
        pushButton_add_new_scientist->setText(QApplication::translate("MainWindow", "Add new", 0));
        QTableWidgetItem *___qtablewidgetitem = scientist_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "ID", 0));
        QTableWidgetItem *___qtablewidgetitem1 = scientist_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem2 = scientist_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Gender", 0));
        QTableWidgetItem *___qtablewidgetitem3 = scientist_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Year born", 0));
        QTableWidgetItem *___qtablewidgetitem4 = scientist_table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Year Deceased", 0));
        button_add_scientist->setText(QApplication::translate("MainWindow", "Add", 0));
        button_scientist_info->setText(QApplication::translate("MainWindow", "Info", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
