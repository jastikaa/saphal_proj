#ifndef SISTER_H
#define SISTER_H

#include <QDialog>

namespace Ui {
class sister;
}

class sister : public QDialog
{
    Q_OBJECT

public:
    explicit sister(QWidget *parent = nullptr);
    ~sister();

private:
    Ui::sister *ui;
};

#endif // SISTER_H
