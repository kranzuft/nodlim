def insertion_sort(l):
    for i in range(1, len(l)):
        j = i-1
        key = l[i]
        while (l[j] > key) and (j >= 0):
           l[j+1] = l[j]
           j -= 1
        l[j+1] = key

numbers = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
insertion_sort(numbers)
print(numbers)