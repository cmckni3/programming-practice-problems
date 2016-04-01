open System

let hello_worlds (n : int) =
  for i in 1..n do
    printf "Hello World\n"

[<EntryPoint>]
let main argv =
    let n = Console.ReadLine() |> int
    hello_worlds n
    0
