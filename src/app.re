open Reasonnativeprojectlib;

let run () => {
  let message = Messenger.generate ();
  print_endline message
};

run ();
