#ifndef LOVE_H
#define LOVE_H

#include <QDialog>

namespace Ui {
class love;
}

class love : public QDialog
{
    Q_OBJECT

public:
    explicit love(QWidget *parent = nullptr);
    ~love();

private:
    Ui::love *ui;
};

#endif // LOVE_H
