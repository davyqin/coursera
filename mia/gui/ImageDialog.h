#pragma once
#include <QDialog>
#include <memory>

class ImageDialog : public QDialog
{
  Q_OBJECT
public:
  explicit ImageDialog(QWidget* parent = 0);
  ~ImageDialog(void);

private:
  class Pimpl;
  std::unique_ptr<Pimpl> _pimpl;
};

