function bubbleSort(items) {
    let swapped;
    do {
        swapped = false;
        for (let i = 0; i < items.length; i++) {
            if (items[i] > items[i + 1]) {
                const temp = items[i];
                items[i] = items[i + 1];
                items[i + 1] = temp;
                swapped = true;
            }
        }
    } while (swapped);

    return items;
}

const unsorted_items = [4, 6, 2, 9, 8, 1, 7, 3, 10, 5];
let sorted_items = bubbleSort(unsorted_items.slice());
console.log("Unsorted:  " + unsorted_items);
console.log("Sorted:    " + sorted_items);