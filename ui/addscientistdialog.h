#ifndef ADDSCIENTISTDIALOG_H
#define ADDSCIENTISTDIALOG_H
#include "service.h"

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

private:
    Ui::AddScientistDialog *ui;
    Service _service;
};

#endif // ADDSCIENTISTDIALOG_H
