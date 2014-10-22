#include "ImageDialog.h"

#include "ui_ImageDialog.h"

class ImageDialog::Pimpl
{
public:
  Pimpl() {}

  /* data */
  Ui::ImageDialog ui;
};

ImageDialog::ImageDialog(QWidget *parent) 
:QDialog(parent, Qt::WindowMinMaxButtonsHint|Qt::WindowCloseButtonHint)
,_pimpl(new Pimpl())
{
  _pimpl->ui.setupUi(this);
}


ImageDialog::~ImageDialog(void)
{
}
