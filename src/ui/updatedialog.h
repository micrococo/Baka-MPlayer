#ifndef UPDATEDIALOG_H
#define UPDATEDIALOG_H

#include <QDialog>

#include "updatemanager.h"

namespace Ui {
class UpdateDialog;
}

class UpdateDialog : public QDialog
{
    Q_OBJECT

public:
    explicit UpdateDialog(UpdateManager *update, QWidget *parent = 0);
    ~UpdateDialog();

    static int update(UpdateManager *update, QWidget *parent = 0);

private:
    Ui::UpdateDialog *ui;
};

#endif // UPDATEDIALOG_H
