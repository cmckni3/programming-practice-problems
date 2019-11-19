// Class Person
class Person {
    var firstName: String
    var lastName: String
    var id: Int

    // Initializer
    init(firstName: String, lastName: String, identification: Int) {
        self.firstName = firstName
        self.lastName = lastName
        self.id = identification
    }

    // Print person data
    func printPerson() {
        print("Name: \(self.lastName), \(self.firstName)")
        print("ID: \(self.id)")
    }
} // End of class Person

// Class Student
class Student: Person {
    var testScores: [Int]

    init(firstName: String, lastName: String, identification: Int, scores: [Int]) {
        self.testScores = scores
        super.init(firstName: firstName, lastName: lastName, identification: identification)
    }

    func calculate() -> String {
        let average = self.testScores.reduce(0) { (t, score) -> Int in
            return t + score
        } / self.testScores.count
        if average >= 90 && average <= 100 {
          return "O"
        }
        else if average >= 80 && average < 90 {
          return "E"
        }
        else if (average >= 70 && average < 80) {
          return "A"
        }
        else if average >= 55 && average < 70 {
          return "P"
        }
        else if average >= 40 && average < 55 {
          return "D"
        }
        else {
          return "T"
        }
    }
} // End of class Student

let nameAndID = readLine()!.characters.split(" ").map{String($0)}
let scoreCount = readLine()
let scores = readLine()!.characters.split(" ").map{Int(String($0))!}

let s = Student(firstName: nameAndID[0], lastName: nameAndID[1], identification: Int(nameAndID[2])!, scores: scores)

s.printPerson()

print("Grade: \(s.calculate())")
