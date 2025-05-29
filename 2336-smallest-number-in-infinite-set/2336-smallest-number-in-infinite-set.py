class SmallestInfiniteSet:
    def __init__(self):
        self.current = 1
        self.addBack_list = []
        self.addBack_set = set()

    def popSmallest(self) -> int:
        if self.addBack_set:
            val = heapq.heappop(self.addBack_list)
            self.addBack_set.remove(val)
            return val

        current_val = self.current
        self.current += 1
        return current_val

    def addBack(self, num: int) -> None:
        if num < self.current and num not in self.addBack_set:
            heapq.heappush(self.addBack_list, num)
            self.addBack_set.add(num)


# Your SmallestInfiniteSet object will be instantiated and called as such:
# obj = SmallestInfiniteSet()
# param_1 = obj.popSmallest()
# obj.addBack(num)