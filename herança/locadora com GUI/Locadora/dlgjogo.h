#ifndef DLGJOGO_H
#define DLGJOGO_H

#include <QDialog>
#include "IAlugavel.h"
#include "Jogo.h"

namespace Ui {
class dlgJogo;
}

class dlgJogo : public QDialog
{
    Q_OBJECT

public:
    explicit dlgJogo(QWidget *parent = nullptr);
    ~dlgJogo();
    bool executar(IAlugavel *item);

private:
    Ui::dlgJogo *ui;
    bool ok;
    void atualizarTela(Jogo *obj);
    void atualizarObjeto(Jogo *obj);
};

#endif // DLGJOGO_H
