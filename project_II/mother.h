#ifndef MOTHER_H
#define MOTHER_H

#include <QDialog>

namespace Ui {
class mother;
}

class mother : public QDialog
{
    Q_OBJECT

public:
    explicit mother(QWidget *parent = nullptr);
    ~mother();

private:
    Ui::mother *ui;
};

#endif // MOTHER_H
