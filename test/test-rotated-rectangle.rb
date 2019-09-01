class TestRotatedRectangle < Test::Unit::TestCase
  sub_test_case(".new") do
    def test_empty
      rotated_rectangle = CV::RotatedRectangle.new
      assert_equal([0, 0, 0, 0, 0],
                   [
                     rotated_rectangle.center.x,
                     rotated_rectangle.center.y,
                     rotated_rectangle.size.width,
                     rotated_rectangle.size.height,
                     rotated_rectangle.angle,
                   ])
    end

    def test_corner_and_size
      rotated_rectangle = CV::RotatedRectangle.new(CV::Point.new(1, 2),
                                                   CV::Size.new(3, 4),
                                                   5)
      assert_equal([1, 2, 3, 4, 5],
                   [
                    rotated_rectangle.center.x,
                    rotated_rectangle.center.y,
                    rotated_rectangle.size.width,
                    rotated_rectangle.size.height,
                    rotated_rectangle.angle,
                  ])
    end
  end

  sub_test_case("modification of members") do
    def test_modify_directly
      rotated_rectangle = CV::RotatedRectangle.new
      rotated_rectangle.center.x = 1
      rotated_rectangle.center.y = 2
      rotated_rectangle.size.width = 3
      rotated_rectangle.size.height = 4
      rotated_rectangle.angle = 5
      assert_equal([1, 2, 3, 4],
        [
         rotated_rectangle.center.x,
         rotated_rectangle.center.y,
         rotated_rectangle.size.width,
         rotated_rectangle.size.height,
       ])
    end

    def test_modify_with_temporal_variable
      rotated_rectangle = CV::RotatedRectangle.new
      tmp_center = rotated_rectangle.center
      tmp_size = rotated_rectangle.size
      tmp_center.x = 6
      tmp_center.y = 7
      tmp_size.width = 8
      tmp_size.height = 9

      assert_equal([6, 7, 8, 9],
        [
         rotated_rectangle.center.x,
         rotated_rectangle.center.y,
         rotated_rectangle.size.width,
         rotated_rectangle.size.height,
       ])
    end
  end
end
