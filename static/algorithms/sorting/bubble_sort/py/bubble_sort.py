# Sorts data using bubble sort algorithm
def bubbleSort(items):
    while True:
        list_modified = False
        # FOR all items except the last
        #   swap adjacent items if out of order
        #   note if modification occur
        for i in range(len(items) - 1, 0, -1):
            if items[i] < items[i-1]:
                items[i], items[i-1] = items[i-1], items[i]
                list_modified = True
        # IF no modifications made to list THEN
        #   stop sorting
        if not list_modified:
            break
    return None


numbers = [10, 2, 3, 9, 4, 8, 6, 1, 7, 5]
print("Unsorted: \t %s" % numbers)
bubbleSort(numbers)
print("Sorted: \t %s" % numbers)
