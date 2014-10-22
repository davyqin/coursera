#include "Controller.h"

#include "ImageDialog.h"

#include <QDesktopWidget>
#include <QApplication>

#include <boost/shared_ptr.hpp>

using namespace std;

class Controller::Pimpl {
public:
  Pimpl() {}
  ImageDialog imageDialog;
};

Controller::Controller(QObject *parent) 
	: QObject(parent), _pimpl(new Pimpl())
{
}

Controller::~Controller() {}

void Controller::activate() {
  //_pimpl->viewDialog.adjustSize();
  _pimpl->imageDialog.show();
  //_pimpl->viewDialog.resize(650,650);
}
