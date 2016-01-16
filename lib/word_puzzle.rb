require 'ffi'

module WordPuzzleExtention
  extend FFI::Library
  ffi_lib 'c'
  ffi_lib 'word_puzzle.so'
  attach_function :RemoveVowels, [:string], :string
end

class WordPuzzle
  define_singleton_method(:remove_vowels) do |current_word|
    WordPuzzleExtention::RemoveVowels(current_word)
  end
end
