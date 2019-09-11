# bs-locale-code

BuckleScript bindings for [locale-code](https://github.com/meikidd/locale-code).

## Installation

```sh
# with yarn
yarn add bs-locale-code locale-code

# with npm
npm install --save bs-locale-code local-code
```

In your `bsconfig.json`, include `"bs-locale-code"` in the `bs-dependencies`.

## Usage

```reason
open LocaleCodeRe;

// => Germany
let countryName = getCountryName("de-DE");
```
