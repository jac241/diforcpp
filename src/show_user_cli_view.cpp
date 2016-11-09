#include <iostream>
#include <string>

#include "show_user_cli_view.hpp"
#include "user.hpp"

ShowUserCliView::ShowUserCliView(const std::string title, User &user) :
  title(title),
  user(user)
{ }

void ShowUserCliView::update() {
  std::cout << "Email: " + user.get_email() << std::endl;
}
