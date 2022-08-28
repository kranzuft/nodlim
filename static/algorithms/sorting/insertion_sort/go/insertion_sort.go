package main

import "fmt"

func insertionSort(items []int) {
	for i := range items {
		c := i
		inserting := items[i+1]
		for ; (items[c] > inserting) && (c >= 0); c-- {
			fmt.Println(c)
			items[c+1] = items[c]
		}
		items[c+1] = inserting
	}
}

func main() {
	items := []int{102, 532, 123, 489}
	insertionSort(items)
	fmt.Println(items)
}