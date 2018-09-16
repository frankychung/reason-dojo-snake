open Reprocessing;

let stepSize = 10;

type state = {position: (int, int)};

let setup = env => {
  Env.size(~width=500, ~height=500, env);
  {position: (50, 50)};
};

let draw = (state, env) => {
  Draw.background(Constants.white, env);
  Draw.fill(Constants.black, env);
  Draw.rect(~pos=state.position, ~width=10, ~height=10, env);
  state;
};

let keyPressed = (state, env) => {
  let (posX, posY) = state.position;
  let position =
    switch (Env.keyCode(env)) {
    | Down => (posX, posY + stepSize)
    | _ => state.position
    };
  {position: position};
};

run(~setup, ~draw, ~keyPressed, ());
