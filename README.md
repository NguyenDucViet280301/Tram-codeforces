
Vương quốc Linear có chính xác một tuyến xe điện. Nó có n trạm dừng, được đánh số từ 1 đến n theo thứ tự di chuyển của xe điện. Tại trạm dừng thứ i, a_i hành khách rời khỏi xe điện, trong khi b_i hành khách lên xe. Xe điện trống khi nó đến trạm dừng đầu tiên. Cũng như, khi xe điện đến trạm cuối cùng, tất cả hành khách rời khỏi xe để nó trở nên trống rỗng.

Nhiệm vụ của bạn là tính toán dung lượng tối thiểu của xe điện sao cho số người bên trong xe tại bất kỳ thời điểm nào không bao giờ vượt quá dung lượng này. Lưu ý rằng tại mỗi trạm dừng, tất cả hành khách rời khỏi trước khi bất kỳ hành khách nào lên xe.

Đầu vào:

Dòng đầu tiên chứa một số nguyên n (2 ≤ n ≤ 1000) — số trạm dừng của xe điện.

Sau đó có n dòng, mỗi dòng chứa hai số nguyên a_i và b_i (0 ≤ a_i, b_i ≤ 1000) — số hành khách rời khỏi xe điện tại trạm dừng thứ i, và số hành khách lên xe tại trạm dừng thứ i. Các trạm dừng được đưa ra từ trạm đầu tiên đến trạm cuối cùng theo thứ tự di chuyển của xe điện.

Số lượng người rời khỏi xe tại một trạm nhất định không được vượt quá tổng số người trên xe ngay trước khi nó đến trạm đó. Cụ thể, a_1 = 0.
Tại trạm cuối cùng, tất cả hành khách rời khỏi xe và nó trở nên trống rỗng.
Không có hành khách nào lên xe ở trạm cuối cùng, nghĩa là b_n = 0.

Đầu ra:

In ra một số nguyên duy nhất biểu thị dung lượng tối thiểu có thể của xe điện (0 được cho phép).

Giải quyết:

Xe điện bắt đầu tại trạm 1 với số hành khách bằng 0.

Tại mỗi trạm, hành khách xuống trước, sau đó hành khách mới lên xe.

Cần tính tổng số hành khách tại mọi thời điểm sau mỗi trạm, và ghi nhận số lượng lớn nhất này. Đó chính là dung lượng tối thiểu của xe điện.
