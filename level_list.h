

#ifndef PROJECT_DIARY_MANAGEMENT_LEVEL_LIST_H
#define PROJECT_DIARY_MANAGEMENT_LEVEL_LIST_H

typedef struct s_d_list {
    t_d_cell **heads;
    int max_levels;
} t_d_list;

t_d_list *create_mt_list(int max_levels);
t_d_list *create_mt_list_from_n(int n);
void insert_cell_at_a_head(t_d_list *list, t_d_cell *cell);
void insert_cell_at_a_particular_head(t_d_list *list, t_d_cell *cell, int level);
void display_a_level(t_d_list *list, int level);
void display_all_levels(t_d_list *list);


void align_and_display(t_d_list *list);

int look_for_value(t_d_list *list, int level ,int value );

void sorted_insert(t_d_list *list, t_d_cell *cell);

int classic_search(t_d_list *list, int value);

int optimized_search(t_d_list *list, int value);
int research_time(t_d_list *list, int nbr_of_research, int n);

#endif //PROJECT_DIARY_MANAGEMENT_LEVEL_LIST_H
