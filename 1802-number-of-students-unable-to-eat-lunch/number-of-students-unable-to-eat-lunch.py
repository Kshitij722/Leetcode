class Solution:
    def countStudents(self, students: List[int], sandwiches: List[int]) -> int:
        for i  in sandwiches:
            if i not in students:
                break
            else:
                students.remove(i)

        return len(students)