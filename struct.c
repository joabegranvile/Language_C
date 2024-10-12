struct st_employee_object *emp;

// emp => method(emp, args...);

struct st_employee_object {
    unsigned salary;
    struct st_manager_object *boss;
    METHOD fire, transfer, competence;
};

struct st_employee_object {
    char _SECRET_MEMBER_DATA_DO_NOT_TOUCHT[4];
    struct st_manager_object *boss;
    METHOD fire, transfer, competence;
};

void _abstract() { abort(); }

// herança

struct st_manager_object;

define EMPLOYEE_FIELDS \
    unsigned salary; \
    struct st_manager_object *boss; \
    METHOD fire, transfer, competence;

struct st_manager_object {
    EMPLOYEE_FIELDS

    struct st_manager_object {
        EMPLOYEE_FIELDS

        struct st_manager_object {
            EMPLOYEE_FIELDS
            unsigned num_subordinates;
            struct st_employee_object **subordinates;

            METHOD delegate_task, send_to_conference;
        };
    }
};