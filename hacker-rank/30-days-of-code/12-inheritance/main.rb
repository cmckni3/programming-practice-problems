class Person
  def initialize(firstName, lastName, id)
    @firstName = firstName
    @lastName = lastName
    @id = id
  end
  def printPerson()
    print("Name: ",@lastName , ", " + @firstName ,"\nID: " , @id)
  end
end

class Student < Person
    def initialize(firstName, lastName, id, scores)
      @firstName = firstName
      @lastName = lastName
      @id = id
      @scores = scores.map { |v| Integer(v) }
    end

    def calculate
      average = @scores.inject(0) { |total, score| total + score } / @scores.size
      if average >= 90 && average <= 100
        'O'
      elsif average >= 80 && average < 90
        'E'
      elsif average >= 70 && average < 80
        'A'
      elsif average >= 55 && average < 70
        'P'
      elsif average >= 40 && average < 55
        'D'
      else
        'T'
      end
    end
end

input = gets.split()
firstName = input[0]
lastName = input[1]
id = input[2].to_i
numScores = gets.to_i
scores = gets.strip().split().map!(&:to_i)
s = Student.new(firstName, lastName, id, scores)
s.printPerson
print("\nGrade: " + s.calculate)
