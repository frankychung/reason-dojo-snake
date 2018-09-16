## Reason Dojo 2018-09-16

Snake!

* Arrow keys to change direction
* Game over if you run into the wall or your own tail
* Put an apple somewhere on the map and eat them to grow longer lol
* Press space to pause or start over from game over state

We'll be using Reprocessing. Check out the docs here:
https://schmavery.github.io/reprocessing/index.html

Some useful stuff you'll probably want to use:

* https://schmavery.github.io/reprocessing/api/Reprocessing_Env.html#value-deltaTime

Reason API: https://reasonml.github.io/api/index

### Install

```
npm install
```

### Build

```
npm run build
```

### Start

```
npm start
```

To build to JS run `npm run build:web` and then run a static server, like
`python -m SimpleHTTPServer` and go to `localhost:8000`. If you're using safari
you can simply open the `index.html` and tick
`Develop > Disable Cross-Origin Restrictions`.

To build to native run `npm run build:native` and run `npm run start:native`

The build system used is [bsb-native](https://github.com/bsansouci/bsb-native).

Forked from https://github.com/bsansouci/reprocessing-example
