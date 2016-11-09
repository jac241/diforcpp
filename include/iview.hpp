#ifndef __IVIEW_HPP_INCLUDED__
#define __IVIEW_HPP_INCLUDED__

class IView {
public:
  virtual ~IView() noexcept = default;
  virtual void update() = 0;
};

#endif
