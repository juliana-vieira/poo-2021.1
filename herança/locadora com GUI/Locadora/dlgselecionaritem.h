#ifndef DLGSELECIONARITEM_H
#define DLGSELECIONARITEM_H

#include <QDialog>

namespace Ui {
class dlgSelecionarItem;
}

class dlgSelecionarItem : public QDialog
{
    Q_OBJECT

public:
    explicit dlgSelecionarItem(QWidget *parent = nullptr);
    ~dlgSelecionarItem();
    int executar();

private:
    Ui::dlgSelecionarItem *ui;
    int selecionado;
};

#endif // DLGSELECIONARITEM_H
