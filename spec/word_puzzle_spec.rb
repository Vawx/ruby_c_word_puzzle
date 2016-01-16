
require 'rspec'
require 'word_puzzle'

describe WordPuzzle do
  it "uses C library to change any vowels to '-', in a string" do
    expect(WordPuzzle.remove_vowels("Hello Friend")).to(eq("H-ll- Fr--nd"))
  end
  it "uses C library to change any capital vowels to '-', in a string" do
    expect(WordPuzzle.remove_vowels("HELLO FRIEND")).to(eq("H-LL- FR--ND"))
  end
end
