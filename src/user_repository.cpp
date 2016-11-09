#include "user_repository.hpp"

UserRepository::UserRepository() {
  users_by_email = std::unordered_map<std::string, User>();
}

void UserRepository::add(User user) {
  users_by_email.emplace(user.get_email(), user);
}

std::vector<User> UserRepository::findAll() {
  std::vector<User> results;
  for (auto &entry : users_by_email) {
    results.push_back(entry.second);
  }

  return results;
}

const User UserRepository::findByEmail(const std::string email) {
  return users_by_email.at(email);
}
