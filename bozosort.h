#ifndef BOZOSORT_H
#define BOZOSORT_H

enum sort_order {
    ASCENDING,
    DESCENDING
};

int bozosort(int arr[], int arr_size, enum sort_order order);

#endif
