/********************************************************************************
** Form generated from reading UI file 'scientistinfodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCIENTISTINFODIALOG_H
#define UI_SCIENTISTINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ScientistInfoDialog
{
public:
    QLabel *label_image;
    QPushButton *browse_image_clicked;
    QPushButton *edit_scientist;
    QPushButton *remove_scientist;
    QLabel *scientist_info;
    QLabel *scientist_relation;
    QTableWidget *scientist_data;
    QLineEdit *id_input;

    void setupUi(QDialog *ScientistInfoDialog)
    {
        if (ScientistInfoDialog->objectName().isEmpty())
            ScientistInfoDialog->setObjectName(QStringLiteral("ScientistInfoDialog"));
        ScientistInfoDialog->resize(618, 406);
        label_image = new QLabel(ScientistInfoDialog);
        label_image->setObjectName(QStringLiteral("label_image"));
        label_image->setGeometry(QRect(10, 80, 231, 221));
        browse_image_clicked = new QPushButton(ScientistInfoDialog);
        browse_image_clicked->setObjectName(QStringLiteral("browse_image_clicked"));
        browse_image_clicked->setGeometry(QRect(10, 330, 80, 16));
        edit_scientist = new QPushButton(ScientistInfoDialog);
        edit_scientist->setObjectName(QStringLiteral("edit_scientist"));
        edit_scientist->setGeometry(QRect(10, 350, 80, 16));
        remove_scientist = new QPushButton(ScientistInfoDialog);
        remove_scientist->setObjectName(QStringLiteral("remove_scientist"));
        remove_scientist->setGeometry(QRect(10, 370, 80, 16));
        scientist_info = new QLabel(ScientistInfoDialog);
        scientist_info->setObjectName(QStringLiteral("scientist_info"));
        scientist_info->setGeometry(QRect(270, 160, 281, 231));
        scientist_relation = new QLabel(ScientistInfoDialog);
        scientist_relation->setObjectName(QStringLiteral("scientist_relation"));
        scientist_relation->setGeometry(QRect(110, 310, 141, 71));
        scientist_data = new QTableWidget(ScientistInfoDialog);
        scientist_data->setObjectName(QStringLiteral("scientist_data"));
        scientist_data->setGeometry(QRect(270, 70, 281, 61));
        scientist_data->setShowGrid(false);
        scientist_data->setGridStyle(Qt::NoPen);
        scientist_data->horizontalHeader()->setVisible(true);
        id_input = new QLineEdit(ScientistInfoDialog);
        id_input->setObjectName(QStringLiteral("id_input"));
        id_input->setGeometry(QRect(10, 10, 261, 31));
        id_input->setMouseTracking(true);
        id_input->setLayoutDirection(Qt::LeftToRight);
        id_input->setAutoFillBackground(false);
        id_input->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        id_input->setCursorMoveStyle(Qt::LogicalMoveStyle);
        id_input->setClearButtonEnabled(true);

        retranslateUi(ScientistInfoDialog);

        QMetaObject::connectSlotsByName(ScientistInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *ScientistInfoDialog)
    {
        ScientistInfoDialog->setWindowTitle(QApplication::translate("ScientistInfoDialog", "Dialog", 0));
        label_image->setText(QString());
        browse_image_clicked->setText(QApplication::translate("ScientistInfoDialog", "IMAGE", 0));
        edit_scientist->setText(QApplication::translate("ScientistInfoDialog", "EDIT", 0));
        remove_scientist->setText(QApplication::translate("ScientistInfoDialog", "REMOVE", 0));
        scientist_info->setText(QApplication::translate("ScientistInfoDialog", "TextLabel", 0));
        scientist_relation->setText(QApplication::translate("ScientistInfoDialog", "Tenglsatafla", 0));
        id_input->setPlaceholderText(QApplication::translate("ScientistInfoDialog", "Enter ID of Scientist...", 0));
    } // retranslateUi

};

namespace Ui {
    class ScientistInfoDialog: public Ui_ScientistInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCIENTISTINFODIALOG_H
