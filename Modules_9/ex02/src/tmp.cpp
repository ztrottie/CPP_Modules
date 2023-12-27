void	PmergeMe::listMerge(std::list<std::pair<int, int> > &list, int left, int mid, int right) {
	const int lengthLeft = mid - left + 1;
	const int lengthRight = right - mid;

	std::list<std::pair<int, int> > leftList(list.begin() + left, list.begin() + mid + 1);
	std::list<std::pair<int, int> > rightList(list.begin() + mid + 1, list.begin() + right + 1);
	
	int i = 0, j = 0, k = left;
	while (i < lengthLeft && j < lengthRight) {
		if (leftList[i].second <= rightList[j].second) {
			list[k] = leftList[i];
			i++;
		} else {
			list[k] = rightList[j];
			j++;
		}
		k++;
	}
	while (i < lengthLeft) {
		list[k] = leftList[i];
		i++;
		k++;
	}
	while (i < lengthRight) {
		list[k] = rightList[j];
		i++;
		k++;
	}
}

void PmergeMe::listMergeSort(std::list<std::pair<int, int> > &list, int const begin, int const end) {
	if (begin >= end)
		return;
	int mid = begin + (end - begin) / 2;
	listMergeSort(list, begin, mid);
	listMergeSort(list, mid + 1, end);
	listMerge(list, begin, mid, end);
}

void	PmergeMe::listInsertion(std::list<std::pair<int, int> > &list, std::list<int> &result) {
	while (!list.empty()) {
		int nbr = list.front().first;
		if (nbr != -1) {
			std::list<int>::iterator it = std::lower_bound(result.begin(), result.end(), nbr);
			result.insert(it, nbr);
		}
		list.erase(list.begin());
	}
}

void	PmergeMe::listSort(int argc, int *values) {
	std::list<std::pair<int, int> > list;
	
	for (int i = 0; i < argc - 1;) {
		int number1 = values[i++];
		if (i < argc - 1) {
			int number2 = values[i++];
			if (number2 > number1)
				list.push_back(std::make_pair(number1, number2));
			else
				list.push_back((std::make_pair(number2, number1)));
		}
		else {
			list.push_back(std::make_pair(-1, number1));
		}
	}
	listMergeSort(list, 0, list.size() - 1);
	std::list<int> result;
	for (std::list<std::pair<int, int> >::const_iterator it = list.begin(); it != list.end(); it++) {
		std::cout << "first: " << it->first << " second: " << it->second << std::endl;
	}
	for (std::list<std::pair<int, int> >::const_iterator it = list.begin(); it != list.end(); it++) {
		result.push_back(it->second);
	}
	listInsertion(list, result);
	for (std::list<int>::const_iterator it = result.begin(); it != result.end(); it++) {
		std::cout << "first: " << *it << std::endl;
	}
}