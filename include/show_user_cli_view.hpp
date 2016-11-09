#ifndef __SHOW_USER_CLI_VIEW_HPP_INCLUDED__
#define __SHOW_USER_CLI_VIEW_HPP_INCLUDED__

#include <string>

#include "iview.hpp"
#include "user.hpp"

class ShowUserCliView : public IView {
  std::string title;
  User &user;
public:
  ShowUserCliView(std::string title, User &user);
  void update() override;
};

#endif
