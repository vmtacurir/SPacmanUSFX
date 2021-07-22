#include <iostream>
using namespace std;

//class State;
//

//clase clave clase statemachine
class Machine
{
  class State* current;
  public:
    Machine();
    void setCurrent(State *s)
    {
        current = s;
    }
    void on();
    void off();
};

//clase gamestate
class State
{
  public:
    virtual void on(Machine* m)
    {
        cout << "   already ON\n";
    }
    virtual void off(Machine* m)
    {
        cout << "   already OFF\n";
    }
};
//statemachine
void Machine::on()
{
  current->on(this);
}
//statemachine
void Machine::off()
{
  current->off(this);
}


//play state  encendido
class ON: public State
{
  public:
    ON()
    {
        cout << "   ON-ctor ";
    };
    ~ON()
    {
        cout << "   dtor-ON\n";
    };
    void off(Machine *m);
};


class OFF: public State
{
  public:
    OFF()
    {
        cout << "   OFF-ctor ";
    };
    ~OFF()
    {
        cout << "   dtor-OFF\n";
    };
    void on(Machine* m)
    {
        cout << "   going from OFF to ON";
        m->setCurrent(new ON());
        delete this;
    }
};

void ON::off(Machine* m)
{
  cout << "   going from ON to OFF";
  m->setCurrent(new OFF());
  delete this;
}

//clase clave clase statemachine

Machine::Machine()
{
  current = new OFF();
  cout << '\n';
}

int main()
{
  void(Machine:: *ptrs[])() = 
  {
    &Machine::off, &Machine::on
  };
  Machine fsm;
  int num;
  while (1)
  {
    cout << "Enter 0/1: ";
    cin >> num;
    (fsm.*ptrs[num])();
  }
}