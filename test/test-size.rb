class TestSize < Test::Unit::TestCase
  sub_test_case(".new") do
    def test_empty
      size = CV::Size.new
      assert_equal([0, 0],
                   [
                     size.width,
                     size.height,
                   ])
    end

    def test_width_and_height
      size = CV::Size.new(1, 2)
      assert_equal([1, 2],
                   [
                     size.width,
                     size.height,
                   ])
    end
  end
end
