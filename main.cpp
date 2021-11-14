#include <memory>
#include "Worker.h"

using namespace Records;

int main(int argc, char** argv) {

  std::cout<<"Створю worker1 на купi та worker2 на стеку"<<std::endl;
  auto worker1 = new Worker();
  Worker worker2;

  worker1->set_worker_code(12);
  worker1->set_age(23);
  worker1->set_post_code(32);
  worker1->set_salary(16000);
  worker1->set_sex("Man");
  worker1->set_adress("Kyiv");
  worker1->set_pasport("23243A");
  worker1->set_first_name("Bob");
  worker1->set_last_name("Tob");

  worker2.set_worker_code(12);
  worker2.set_age(23);
  worker2.set_post_code(32);
  worker2.set_salary(16000);
  worker2.set_sex("Woman");
  worker2.set_adress("Kyiv");
  worker2.set_pasport("23343A");
  worker2.set_first_name("Nina");
  worker2.set_last_name("Tob");

  worker1->display();
  worker2.display();

  delete worker1;
  return 0;

}
