#include "to_list.hpp"
#include "to_list.cpp"


int main(){
    To_list todoList;
    int choise;

    do{
        std::cout << "\n--- To-Do List Menu ---\n";
        std::cout << "1. Add Task\n";
        std::cout << "2. View Tasks\n";
        std::cout << "3. Change  Name\n";
        std::cout << "4. Mark Task as Done\n";
        std::cout << "5. Remove Task\n";
        std::cout << "6. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin>>choise;

    
        if(choise==1){
            std::string name;
            std::cout << "Enter task name: ";
            std::cin.ignore();
            std::getline(std::cin, name);
            std::string newcategry= todoList.choose_category();
            todoList.add_task(name,newcategry);
            std::cout << "Your task is created.\n";
        
        }
        
        else if(choise==2){
            todoList.show_all_tasks();
        }
        else if(choise ==3){
            int index ;
            std::cout<<"for wich task you wannt to change the name :";
            std::cin>>index;
            std::cin.ignore();
            std::string newname ;
            std::cout<<"Enter the new name :";
            getline(std::cin, newname);
            todoList.change_task_name(index-1, newname);
            std::cout<<"the name of task is changet\n";
        }
       

        else if(choise ==4){
            int index ;
            std::cout<<"wich task you wannt to make it done :";
            std::cin>>index;
            todoList.make_done(index-1);
            std::cout<<"the task is done now\n";
        }    
        

        else if(choise==5){
            int index ;
            std::cout<<"wich task you wannt to remove:";
            std::cin>>index;
                
            todoList.remove(index-1);
            std::cout<<"your task is removet\n";
        }


        else if(choise ==6){
            std::cout << "Exiting...\n";
            break;
        }
        else {
            std::cout << "Invalid choice. Please try again.\n";
        }

    }while(choise !=6);

    return 0;
}

