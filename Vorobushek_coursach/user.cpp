#include "user.h"

user::user(const std::string &str) : bt(str)
{

}

void user::show() const
{
	bt.show_table();
}

bus_table* user::get_bt()
{
	return &bt;
}

void user::personal_task()
{
	(this->get_bt())->personal_task();
}