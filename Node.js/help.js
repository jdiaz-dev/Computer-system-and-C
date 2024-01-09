// This is the public class... note the constructor
class Whatever extends JSTransferable {
  constructor(a, b) {
    this.a = a;
    this.b = b;
  }

  [kClone]() {
    // The data property here contains the data that is included
    // in the serialized buffer. The deserializeInfo is used on
    // the receiving end to identify the internal class to create
    // when deserializing. Note that here we identify InternalWhatever.
    // We do that because when the object is deserialized, we will
    // use a default constructor then set the properties separately
    // using the kDeserialize function, rather than calling the
    // constructor above.
    return {
      data: {
        a: this.a,
        b: this.b,
      },
      deserializeInfo: 'internal/whatever:InternalWhatever'
    };
  }

  [kDeserialize]({ a, b }) {
    this.a = a;
    this.b = b;
  }
}

class InternalWhatever extends JSTransferable {}

InternalWhatever.prototype.constructor = Whatever;
ObjectSetPrototypeOf(InternalWhatever.prototype, Whatever.prototype);

module.exports = {
  Whatever,
  InternalWhatever,
};