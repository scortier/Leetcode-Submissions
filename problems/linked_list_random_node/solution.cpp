class Solution
{
  ListNode *head;
  long long size;

public:
  /** @param head The linked list's head.
        Note that the head is guaranteed to be not null, so it contains at least one node. */
  Solution(ListNode *head)
  {
    this->head = head;
    this->size = getSize();
  }

  long long getSize()
  {
    long long ans = 0;
    auto temp = head;
    while (temp)
    {
      temp = temp->next;
      ans++;
    }
    return ans;
  }

  /** Returns a random node's value. */
  int getRandom()
  {
    long long randomNum = rand() % size;
    auto temp = head;
    while (randomNum > 0)
    {
      temp = temp->next;
      randomNum--;
    }
    return temp ? temp->val : 0;
  }
};
