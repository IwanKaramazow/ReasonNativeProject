open OUnit2;
open Reasonnativeprojectlib;

let test1 _ => {
  let message = Messenger.generate ();
  let expected = "There's a reason for everything..";
  assert_equal message expected
};

let suite = "Reason Native Project Test Suite" >::: ["test1" >:: test1];

let () = run_test_tt_main suite;
