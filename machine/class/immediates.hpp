#ifndef RBX_BUILTIN_IMMEDIATES_HPP
#define RBX_BUILTIN_IMMEDIATES_HPP

#include "class/object.hpp"

namespace rubinius {
  class NilClass : public Object {
  public:
    static const object_type type = NilType;

    class Info : public TypeInfo {
    public:
      Info(object_type type)
        : TypeInfo(type)
      {
        allow_user_allocate = false;
      }

      virtual void mark(Object* t, memory::ObjectMark& mark);
      virtual void show(STATE, Object* self, int level);
      virtual void show_simple(STATE, Object* self, int level);
      virtual void auto_mark(Object* obj, memory::ObjectMark& mark) {}
    };
  };

  class TrueClass : public Object {
  public:
    static const object_type type = TrueType;

    class Info : public TypeInfo {
    public:
      Info(object_type type)
        : TypeInfo(type)
      {
        allow_user_allocate = false;
      }

      virtual void mark(Object* t, memory::ObjectMark& mark);
      virtual void show(STATE, Object* self, int level);
      virtual void auto_mark(Object* obj, memory::ObjectMark& mark) {}
    };
  };

  class FalseClass : public Object {
  public:
    static const object_type type = FalseType;

    class Info : public TypeInfo {
    public:
      Info(object_type type)
        : TypeInfo(type)
      {
        allow_user_allocate = false;
      }

      virtual void mark(Object* t, memory::ObjectMark& mark);
      virtual void show(STATE, Object* self, int level);
      virtual void auto_mark(Object* obj, memory::ObjectMark& mark) {}
    };
  };
}

#endif
