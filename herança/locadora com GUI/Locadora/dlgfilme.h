#ifndef DLGFILME_H
#define DLGFILME_H

#include <QDialog>
#include "IAlugavel.h"
#include "Filme.h"

namespace Ui {
class dlgFilme;
}

class dlgFilme : public QDialog
{
    Q_OBJECT

public:
    explicit dlgFilme(QWidget *parent = nullptr);
    ~dlgFilme();

    bool executar(IAlugavel *item);

private:
    Ui::dlgFilme *ui;

    bool ok;
    void atualizarTela(Filme *obj);
    void atualizarObjeto(Filme *obj);
};

#endif // DLGFILME_H
