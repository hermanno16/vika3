#ifndef ADDSCIENTISTDIALOG_H
#define ADDSCIENTISTDIALOG_H
#include "service.h"
#include <QDialog>
#include <string>
#include <QString>
#include <QPixmap>
#include <QFileDialog>
#include <QFrame>

#include <QDialog>

namespace Ui {
class AddScientistDialog;
}

class AddScientistDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddScientistDialog(QWidget *parent = 0);
    ~AddScientistDialog();

private slots:
    void on_add_Photo_Button_clicked();

private:
    Ui::AddScientistDialog *ui;
    Service _service;
};

#endif // ADDSCIENTISTDIALOG_H
