#ifndef ECN_PRIORITY_TAG_H
#define ECN_PRIORITY_TAG_H

#include "ns3/tag.h"

namespace ns3
{

class MyPriorityTag : public Tag
{

public:
  MyPriorityTag();

  void SetId(uint32_t id);
  uint32_t GetId() const;

  void SetPriority(uint8_t priority);
  uint8_t GetPriority() const;


  static TypeId GetTypeId (void);
  virtual TypeId GetInstanceTypeId (void) const;
  virtual void Serialize (TagBuffer i) const;
  virtual void Deserialize (TagBuffer i);
  virtual uint32_t GetSerializedSize () const;
  virtual void Print (std::ostream &os) const;
  uint32_t m_seq;

private:
  uint32_t m_flowid;
  uint8_t m_priority;
};

} //namespace ns3

#endif /* MY_PRIORITY_TAG_H */
